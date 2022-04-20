This a JNI application where the java native method in Operators.java gets input from user (two input variables and an arithmetic operation to be performed).
The java native method communicates with the C program(Operators.c) to execute the arithmetic operation.

Execution commands(linux):
javac -h . Operators.java
g++ -c -fPIC -I/usr/lib/jvm/java-11-openjdk-amd64/include -I/usr/lib/jvm/java-11-openjdk-amd64/include/linux Operators.c -o Operators.o
g++ -shared -fPIC -o libOperators.so Operators.o -lc
java -cp . -Djava.library.path=. Operators
