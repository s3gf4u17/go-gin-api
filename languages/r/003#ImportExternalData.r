help(read.csv)
# exactly the same as
?read.csv

data1 <- read.csv(file.choose(),header=TRUE)
# or with more generic function
data2 <- read.table(file.choose(),header=TRUE,sep=",")

# for tab delimited text file
data3 <- read.delim(file.choose(),header=TRUE)
# or
data4 <- read.table(file.choose(),header=TRUE,sep="\t")