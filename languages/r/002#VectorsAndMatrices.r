c(1,3,5,7,9) # c - concatenate
c("a","b","c","d")

2:7 # sequence from 2 to 7
seq(from=1,to=7,by=1)
seq(from=1,to=3,by=0.5)

rep(1,times=10)
rep(1:3,times=5)

rep(c("m","f"),times=4)

x<-1:5
y<-seq(from=1,to=9,by=2)

x + 10
y - 10
x * 5
y / 2

# it two vector are the same length we can do this
x + y
x - y
x * y
x / y

x[1] # we can extract elements by id (starting with 1)
x[-1] # all elements except first
y[1:3]
y[c(1,5)]
y[-c(1,5)]
y[y<6] # only elements < 6

# matrix with 9 elements and a row size of 3
matrix(c(1,2,3,4,5,6,7,8,9),nrow=3)
matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,byrow=TRUE)

mat = matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,byrow=TRUE)
mat[1,2] # first row, second column
mat[c(1,2,3),2]
mat[1,] # leaving argument empty it extracts all columns from first row
mat[,1] # all rows but only first column
mat[,] # everything