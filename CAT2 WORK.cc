#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person() {} // Default constructor
    Person(string n) {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int borrowed) : Person(n) {
        memberID = id;
        booksBorrowed = borrowed;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int borrowed, double fee) 
        : LibraryMember(n, id, borrowed) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember member("Chris", 792701788, 2, 300);

    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << member.getMembershipFee() << endl;

    return 0;
}
CAT
