
empid = c("1","2","3","4","5","6","7","8","9","10","11","12","13","14","15")
age = c(30,37,45,32,50,60,35,32,34,43,32,30,43,50,60)
sex = c(0,1,0,1,1,1,0,0,1,0,0,1,1,0,0)
status = c(1,1,2,2,1,,1,2,2,1,2,1,2,1,2)
dd = data.frame(empid,age,sex,status)
dd


dd$sex = factor(dd$sex, labels = c('Male', 'Female') )
dd$status = factor(dd$status, labels = c('Staff', 'Faculty') )



plot(dd$empid, dd$age, type='l',xlab = 'empid',ylab = 'age',col="deepskyblue1")

library(plotrix)
pie3D(table(factor(dd$sex, labels=c("male","female"))), labels=c('Male','Female'), 
explode=0.1, main='Pie Chart of Seggregation of Sex',col=c('deepskyblue1','hotpink1') )

par(mfrow=c(1,2))


barplot(table(dd$status),col = c('steelblue1','lightpink'))


x = (subset(dd,dd$status=='Staff'))
y = (subset(dd,dd$status=='Faculty'))
boxplot(x)
boxplot(y)

boxplot(dd$age~dd$status,col=c("lightblue1","lightpink"),xlab='Status',ylab='Age')





 





