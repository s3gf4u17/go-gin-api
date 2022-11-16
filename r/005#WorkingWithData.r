data1 <- read.table(file.choose(),header=T,sep=",")

# to view data1 in a pretty table
View(data1)

# to check dimensions
dim(data1)

# check first 6 rows
head(data1)

# check last 6 rows
tail(data1)

# check all columns from rows 5-8
data1[c(5,6,7,8),]

# check all columns from rows 5-9
data1[5:9,]

# check first two columns from rows 5-9
data1[5:9,1:2]

# read all rows except 4-722
data1[-(4:722),]

# to check header
names(data1)

# check the mean of names data1 column
mean(data1$Age)

# or by extracting age column
age <- data1$Age
age <- mean(age)

# or by attaching dataset to workspace
attach(data1)
mean(Age)
Age

# to detach -> detach(data1)
# Age request then throws an error

# check variable type
class(Age)
class(LungCap)
class(Smoke)

# data summary
summary(data1)

# for factors we can ask for all different levels possible and get frequency summary
x <- as.factor(c(0,1,1,1,0,1,0,1,0,1,0,0))
class(x)
summary(x)
levels(x)