/* Create a structure representing a bank account of a customer. What fields did you see and why? */

#include <stdio.h>

// Structure for bank account
struct BankAccount
{
    int accNo;     // account number
    char name[30]; // customer name
    float balance; // account balance
};

int main()
{
    struct BankAccount b1 = {101, "Shobhit", 5000.0};  // Acount details of customer 1
    printf("AccNo:%d \nName:%s \nBalance:%.2f\n\n", b1.accNo, b1.name, b1.balance);
 
    struct BankAccount b2 = {102, "Saurabh", 10000.0}; // Acount details of customer 2
    printf("AccNo:%d \nName:%s \nBalance:%.2f\n\n", b2.accNo, b2.name, b2.balance);
 
    struct BankAccount b3 = {103, "Shunil", 20000.0};  // Acount details of customer 3
    printf("AccNo:%d \nName:%s \nBalance:%.2f\n\n", b3.accNo, b3.name, b3.balance);
    
    return 0;

}
