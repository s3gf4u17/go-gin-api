install kotlin:
```
sudo snap install --classic kotlin
```
compile the application using the kotlin compiler:
```
kotlinc hello.kt -include-runtime -d hello.jar
```
run kotlin application:
```
java -jar hello.jar
```