<h3>Objective</h3>

Given an integer $x$, return $true$ if $x$ is a palindrome, and $false$ otherwise.

``` math
-2^{31} <= x <= 2^{31} - 1
```

<h3>Examples</h3>

```
INPUT: x = 121
OUTPUT: true
EXPLANATION: 121 reads as 121 from left to right and from right to left
```

```
INPUT: x = -121
OUTPUT: false
EXPLANATION: from left to right, it reads -121. From right to left, it becomes 121-
```

```
INPUT: x = 10
OUTPUT: false
EXPLANATION: reads 01 from right to left
```

<h3>Explanation</h3>

We can represent both input $x$ and output $y$ as polynomials:

```math
x = a_0*10^n + a_1*10^{n-1} + a_2*10^{n-2} + ... + a_n*10^0
```

```math
y = a_0*10^0 + a_1*10^1 + a_2*10^2 + ... + a_n*10^n
```

So if we could just separate every $a_m$ from $x$, we would then be able to multiply them all by $10$ to the power of their corresponding $m$ and get final sum which would be equal to $y$. Problem is that we dont know the exact length of $x$, so we can't simply iterate with modulo function to get all $a_m$ values. We need to begin with least significant $a_m$ in $x$ polynomial. We still need to mutliply it by $10^n$. It can be done in the following way:

```math
y = a_n*10
```

Now add $a_{n-1}$ and multiply whole polynomial by $10$. Do it $n$ more times to get all $a_m$ values into new polynomial.

```math
y = a_n*10^n + ... + a_2*10^2 + a_1*10^1 + a_0*10^0
```

Which is the same formula for $y$ as the one we've seen at the beginning.

```math
y = a_0*10^0 + a_1*10^1 + a_2*10^2 + ... + a_n*10^n
```

The last question is how to find all the $a_m$ values? This can be done using the following sequence:

```math
a_n = (x / 10^0) \% 10
```
```math
a_{n-1} = (x / 10^1) \% 10
```
```math
a_{n-2} = (x / 10^2) \% 10
```
```math
...
```
```math
a_1 = (x / 10^{n-1}) \% 10
```
```math
a_0 = (x / 10^n) \% 10
```