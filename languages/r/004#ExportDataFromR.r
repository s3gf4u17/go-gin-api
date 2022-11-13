dataToExport <- read.csv(file.choose(),header=T)

?write.table
write.table(dataToExport,file="exported.csv",sep=",")
# export without row names as a header
write.table(dataToExport,file="exported.csv",row.names=F,sep=",")

write.csv(dataToExport,file="exported.csv",row.names=F)