This a JNI application where the java native method in Operators.java gets input from user (two input variables and an arithmetic operation to be performed).
The java native method communicates with the C program(Operators.c) to execute the arithmetic operation.

Execution commands(linux):
javac -h . Operations.java
g++ -c -fPIC -I/usr/lib/jvm/java-11-openjdk-amd64/include -I/usr/lib/jvm/java-11-openjdk-amd64/include/linux Operations.c -o Operations.o
g++ -shared -fPIC -o libOperations.so Operations.o -lc
java -cp . -Djava.library.path=. Operations
