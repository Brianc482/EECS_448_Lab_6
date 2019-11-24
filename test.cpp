#include "test.h"

test::test(){}
void test::test1(){
	std::cout << "Test 1: isEmpty() on an empty queue...";
	if(newQueue.isEmpty()){
		std::cout << "PASSED the queue is empty!\n";
	}
	else{
		std::cout << "FAILED the queue is not empty!\n";
	}
}
void test::test2(){
	newQueue.enqueue(20);
	if(newQueue.peekFront() == 20){
		std::cout << "PASSED 20 is now in the queue!\n";
	}
	else{
		std::cout << "FAILED to add 20 to the queue!\n";
	}
}
void test::test3(){
	if(newQueue.peekFront() == 20){
		std::cout << "PASSED the first value is 20!\n";
	}
	else{
		std::cout << "FAILED the first value is not 20!\n";
	}
}
void test::test4(){
	newQueue.dequeue();
	if(newQueue.isEmpty()){
		std::cout << "PASSED the queue is now empty!\n";
	}
	else{
		std::cout << "FAILED the queue is not empty!\n";
	}
}
void test::test5(){
	newQueue.enqueue(10);
	newQueue.enqueue(20);
	std::cout << "PASSED added 10 and 20 to the queue!\n";
}
void test::test6(){
	if(newQueue.peekFront() == 10){
		std::cout << "PASSED the value is 10!\n";
	}
	else{
		std::cout << "FAILED the value is "<< newQueue.peekFront() << "!\n";
	}
}
void test::test7(){
	newQueue.dequeue();
	if(newQueue.peekFront() == 20){
		std::cout << "PASSED the value 10 was removed!\n";
	}
	else{
		std::cout << "FAILED the value at the front of the queue is " << newQueue.peekFront() << "!\n";
	}
}
void test::test8(){
	newQueue.dequeue();
	if(newQueue.isEmpty()){
		std::cout << "PASSED the queue is now empty!\n";
	}
	else{
		std::cout << "FAILED the value in the queue is " << newQueue.peekFront() << "\n";
	}
}
void test::test9(){
	newQueue.enqueue(1);
	newQueue.enqueue(2);
	newQueue.enqueue(3);
	newQueue.enqueue(4);
	newQueue.enqueue(5);
	newQueue.dequeue();
	newQueue.dequeue();
	newQueue.dequeue();
	if(newQueue.peekFront() == 4){
		std::cout << "PASSED the front value is 4!\n";
	}
	else{
		std::cout << "FAILED the first value is " << newQueue.peekFront() << "!\n";
	}
	newQueue.dequeue();
	newQueue.dequeue();
}
void test::test10(){
	if(newQueue.isEmpty()){
		std::cout << "PASSED the queue is now empty!\n";
	}
	else{
		std::cout << "FAILED values remain in the queue!\n";
	}
}
void test::test11(){
	try{
		newQueue.dequeue();
	}
	catch(std::runtime_error const& rt){
		std::cout << "Error was caught trying to dequeue() on an empty queue!\n";
	}
}
void test::test12(){
	try{
		newQueue.peekFront();
	}
	catch(std::runtime_error const& rt){
		std::cout << "Error was caught trying to peekFront() on an empty queue!\n";
	}
}
void test::runTests(){
	std::cout << "\nBeginning test mode on the queue...\n\n";
	std::cout << "Test 1: isEmpty() on an empty queue...";
	test1();
	std::cout << "Test 2: enqueue() with the value 20...";
	test2();
	std::cout << "Test 3: peekFront(), the value should be 20...";
	test3();
	std::cout << "Test 4: dequeue() on the value 20...";
	test4();
	std::cout << "Test 5: enqueue() by adding 10 then 20...";
	test5();
	std::cout << "Test 6: peekFront() to find if 10 is the front value... ";
	test6();
	std::cout << "Test 7: dequeue()...a queue is FIFO so the remaining value should be 20...";
	test7();
	std::cout << "Test 8: dequeue() again to see if the queue is empty...";
	test8();
	std::cout << "Test 9: enqueue() with 1, 2, 3, 4, and 5 then testing dequeue() three times. Remaining value should be 4...";
	test9();
	std::cout << "Test 10: removed remaining values and testing isEmpty()...";
	test10();
	std::cout << "Test 11: dequeue() on an empty queue...";
	test11();
	std::cout << "Test 12: peekFront() on an empty queue...";
	test12();
	std::cout << "\nTesting completed.\n\n";
}
