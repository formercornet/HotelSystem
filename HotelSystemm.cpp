// HotelSystemm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<User> users;

class User {

public:
    User() {
        user = "";
        password = "";
        first_name = "";
        last_name = "";
        email = "";
        phone = "";
        address = "";
    }
    User(string user_, string password_, string first_name_, string last_name_, string email_, string phone_, string address_) {
        user = user_;
        password = password_;
        first_name = first_name_;
        last_name = last_name_;
        email = email_;
        phone = phone_;
        address = address_;
    }
    void displayInfo() {
        cout << "Username: " << user << endl
            << "Password: " << password << endl
            << "First name: " << first_name << endl
            << "Last name: " << last_name << endl
            << "Email: " << email << endl
            << "Phone: " << phone << endl
            << "Address: " << address << endl;
    }

    string getUsername() {
        return user;
    }

    string getPassword() {
        return password;
    }

    string getFirstname() {
        return first_name;
    }

    string getLastname() {
        return last_name;
    }

    string getEmail() {
        return email;
    }

    string getPhone() {
        return phone;
    }

    string getAddress() {
        return address;
    }

    void setUsername(string user_) {
        user = user_;
    }

    void setPassword(string password_) {
        password = password_;
    }

    void setFirstname(string first_name_) {
        first_name = first_name_;
    }

    void setLastname(string last_name_) {
        last_name = last_name_;
    }

    void setEmail(string email_) {
        email = email_;
    }

    void setPhone(string phone_) {
        phone = phone_;
    }

    void setAddress(string address_) {
        address = address_;
    }

private:
    string user;
    string password;
    string first_name;
    string last_name;
    string email;
    string phone;
    string address;
};

class MealPlan {

public:
    MealPlan() {
        plan_type = "";
        description = "";
        price = 0.0;
    }

    MealPlan(string plan_type_, string description_, double price_) {
        plan_type = plan_type_;
        description = description_;
        price = price_;
    }

    string getType() {
        return plan_type;
    }

    string getDescription() {
        return description;
    }

    double getPrice() {
        return price;
    }

    void setType(string plan_type_) {
        plan_type = plan_type_;
    }

    void setDescription(string description_) {
        description = description_;
    }

    void setPrice(double price_) {
        price = price_;
    }

    void displayInfo() const {
        cout << "Plan Type: " << plan_type << endl
            << "Description: " << description << endl
            << "Price: " << price << endl;
    }

private:
    string plan_type;
    string description;
    double price;
};

class CleaningSchedule {

public:
    CleaningSchedule() {
        room_number = 0;
        cleaning_time = "";
    }

    CleaningSchedule(int room_number_, string cleaning_time_) {
        room_number = room_number_;
        cleaning_time = cleaning_time_;
    }

    int getRoomNumber() {
        return room_number;
    }

    string getCleaningTime() {
        return cleaning_time;
    }

    void setRoomNumber(int room_number_) {
        room_number = room_number_;
    }

    void setCleaningTime(string cleaning_time_) {
        cleaning_time = cleaning_time_;
    }

    void displayInfo() {
        cout << "Room Number: " << room_number << endl
            << "Cleaning Time: " << cleaning_time << endl;
    }

private:
    int room_number;
    string cleaning_time;
};

class Feedback {

public:
    Feedback() {
        customerName = "";
        ratingMessage = "";
    }

    Feedback(string customerName_, string ratingMessage_) {
        customerName = customerName_;
        ratingMessage = ratingMessage_;
    }

    string getCustomerName() {
        return customerName;
    }

    string getRatingMessage() {
        return ratingMessage;
    }

    void setCustomerName(string customerName_) {
        customerName = customerName_;
    }

    void setRatingMessage(string ratingMessage_) {
        ratingMessage = ratingMessage_;
    }

private:
    string customerName;
    string ratingMessage;
};
/*
class Hotel {
public:
    string Hotel_branch, Hotel_view;
    char Hotel_phase, A, B, C, D;

    void chooseHotel() {
        string Hotel_branch;
        cout << "Choose your Hotel branch. (Cairo, Luxor, Hurgada or SharmElSheikh) " << endl;
        cin >> Hotel_branch;
        while (Hotel_branch != "Cairo" && Hotel_branch != "Luxor" && Hotel_branch != "Hurgada" && Hotel_branch != "c") {
            cout << "Error!, Hotel branch doesn't exist. Please choose again." << endl;
            cin >> Hotel_branch;
        }
    }

    void choosePhase() {
        char Hotel_phase, A, B, C, D;
        cout << "Choose your view:";
        cin >> Hotel_phase;
        while (Hotel_phase != A && B && C && D) {
            cout << "Error!, The Hotel phase you chose doesn't exist. Please choose again." << endl;
            cin >> Hotel_phase;
        }

    }
    void chooseView() {
        string Hotel_view;
        cout << "Enter your desired view: Northern , Southern, Eastern or Western.";
        cin >> Hotel_view;
        while (Hotel_view != "Northern" && "Southern" && "Eastern" && "Western") {
            cout << "Error!, The Hotel phase you chose doesn't exist. Please choose again." << endl;
            cin >> Hotel_phase;
        }

    }
};
class Room {
public:
    string Room_numcode, Room_type;
    void getRoom() {
        string Room_numcode;
        cout << "Please Enter your Room code: ";
        cin >> Room_numcode;
    }
    void roomType() {
        string Room_numcode;
        char S, E, T, Y, A, B, C, D;
        cout << "Please Enter your Room code: ";
        cin >> Room_numcode;
        string temp = Room_numcode.substr(2, 0);
        if (temp == "S") {
            cout << "The Room is Single." << endl;
            Room_type = "Single";
        }
        if (temp == "E") {
            cout << "The Room is Double." << endl;
            Room_type = "Double";
        }
        if (temp == "T") {
            cout << "The Room is Triple" << endl;
            Room_type = "Triple";
        }
        if (temp == "Y") {
            cout << "The Room is a Suite" << endl;
            Room_type = "Suite";
        }

    }
    void findRoom() {
        string Room_numcode;
        string felp = Room_numcode.substr(0, 1);
        cout << "The Room number is:" << felp << endl;
        string teml = Room_numcode.substr(3, 0);
        if (teml == "0") {
            cout << "The Room is on the ground floor" << endl;
        }
        cout << "The Room is on the " << teml << "floor" << endl;
        string temo = Room_numcode.substr(4, 0);
        if (temo == "A") {
            cout << "The Room is in Phase 1." << endl;
        }
        if (temo == "B") {
            cout << "The Room is in Phase 2." << endl;
        }
        if (temo == "C") {
            cout << "The Room is in Phase 3" << endl;
        }
        if (temo == "D") {
            cout << "The Room is in Phase 4" << endl;
        }
    }
    void printRoomnum() {
        int nO;
        string Room_type, floor, phase;
        string v1, v2, v3;
        cout << "Write in order, the 2 digit room number, room type, room floor and the phase building." << endl;
        cin >> nO, Room_type, floor, phase;
        if (Room_type == "Single") {
            v1 = "S";
        }
        if (Room_type == "Double") {
            v1 = "E";
        }
        if (Room_type == "Triple") {
            v1 = "T";
        }
        if (Room_type == "Suite") {
            v1 = "Y";
        }
        if (floor == "Ground") {
            v2 = "0";
        }
        if (floor == "First") {
            v2 = "1";
        }
        if (floor == "Second") {
            v2 = "2";
        }
        if (floor == "Third") {
            v2 = "3";
        }
        if (floor == "Fourth") {
            v2 = "4";
        }
        if (floor == "Fifth") {
            v2 = "5";
        }
        if (floor == "Sixth") {
            v2 = "6";
        }
        if (floor == "Seventh") {
            v2 = "7";
        }
        if (floor == "Eighth") {
            v2 = "8";
        }
        if (floor == "Ninth") {
            v2 = "9";
        }
        if (phase == "First") {
            v3 = "A";
        }
        if (phase == "Second") {
            v3 = "B";
        }
        if (phase == "Third") {
            v3 = "C";
        }
        if (phase == "Fourth") {
            v3 = "D";
        }
        cout << "The room number-code is:" << nO << v1 << v2 << v3 << endl;
    }
};
*/



class Payment {
private:
    string Payment_method;
    float amount_paid;
public:
    void setPaymentMethod(const string& paymentMethod) {
        int pay, Expmonth, Expyear, CVV; // Expiry month and year
        string CardHolderF, CardHolderS; // first and second name
        long creditNum;
        cout << "Choose Your payment method (For Cash type 1, For Credit Card type 2): ";
        cin >> pay; cout << endl;
        if (pay == 1)
            cout << "Please pay at the nearest Fawry to you" << endl;
        if (pay == 2) {
            cout << "Enter your Credit Card Information" << endl;
            cout << "Card holder first name: ";
            cin >> CardHolderF; cout << endl;
            cout << "Card holder second name: ";
            cin >> CardHolderS; cout << endl;
            cout << "Credit Card number: ";
            cin >> creditNum; cout << endl;
            cout << "Expiry month: ";
            cin >> Expmonth; cout << endl;
            cout << "Expiry year: ";
            cin >> Expyear; cout << endl;
            cout << "CVV: ";
            cin >> CVV; cout << endl;
        }
        Payment_method = paymentMethod;
    }

    string getPaymentMethod() {
        return this->Payment_method;
    }

    void setAmountPaid(float amountPaid) {
        amount_paid = amountPaid;
    }

    float getAmountPaid() const {
        return amount_paid;
    }
};

enum class DiscountType {
    Coupon, Other
};

class Discount {
private:
    float discountRate;
    string Coupon;
    DiscountType discountType;

public:
    // Constructor
    Discount() {
        discountRate = 0.0f;
        Coupon = "";
        discountType = DiscountType::Other; // b3deen n3ml if statement ll discount type <Membership, GovAndMilitary, PromoDisc, PackDisc>
    }

    void setDiscountRate(float rate) {
        discountRate = rate;
    }

    void setCoupon(const string& couponCode) {
        Coupon = couponCode;
        discountType = DiscountType::Coupon;
    }

    float getDiscountRate() const {
        return discountRate;
    }

    string getCoupon() const {
        return Coupon;
    }

    float calculateDiscountedAmount(float originalAmount) const {
        if (discountType == DiscountType::Coupon) {
            std::cout << "Applying coupon: " << Coupon << endl;
            return originalAmount - discountRate;
        }
        else {
            std::cout << "Applying other discount" << endl;
            return originalAmount * (1 - discountRate);
        }
    }
};


void meal_plan_editting_menu() {
    vector<MealPlan> mealPlans;
    while (true) {
        int meal_plan_choice;
        cout << "Meal Plans" << endl
            << "---------------------" << endl
            << "1: Make a new meal plan" << endl
            << "2: Edit a meal plan" << endl
            << "3: Delete a meal plan" << endl
            << "4: Go back" << endl;
        cin >> meal_plan_choice;
        if (meal_plan_choice == 1) {
            string type, description;
            double price;
            cout << "Please enter the meal plan type: " << endl;
            cin.ignore();
            getline(cin, type);
            cout << "Please enter the meal plan description:  " << endl;
            getline(cin, description);
            cout << "Please enter the meal price: " << endl;
            cin >> price;
            MealPlan newPlan(type, description, price);
            newPlan.displayInfo();
            mealPlans.push_back(newPlan); // Add the new MealPlan object to the vector

        }

        else if (meal_plan_choice == 2) {
            cout << "Meal Plans List:" << endl;
            int count = 1;
            for (const MealPlan& plan : mealPlans) {
                cout << "Plan Number: " << count << endl;
                plan.displayInfo();
                cout << endl;
                count++;
            }
            int planNumber;
            cout << "Enter the plan number you want to edit: ";
            cin >> planNumber;
            if (planNumber >= 1 && planNumber <= mealPlans.size()) {
                // Subtract 1 from planNumber to match the vector index
                MealPlan& plan = mealPlans[planNumber - 1];

                string newType, newDescription;
                double newPrice;
                int edit_parameter;
                cout << "What do you want to edit? in the meal plans?" << endl
                    << "-------------------------------" << endl
                    << "1: Type" << endl
                    << "2: Description" << endl
                    << "3: Price" << endl
                    << "4: Edit all" << endl;
                cin >> edit_parameter;
                if (edit_parameter == 1) {
                    cout << "Enter new Meal plan Type: " << endl;
                    cin.ignore();
                    getline(cin, newType);
                    plan.setType(newType);
                    plan.displayInfo();
                }
                else if (edit_parameter == 2) {
                    cout << "Enter new Meal plan Description: " << endl;
                    cin.ignore();
                    getline(cin, newDescription);
                    plan.setDescription(newDescription);
                    plan.displayInfo();
                }
                else if (edit_parameter == 3) {
                    cout << "Enter new Meal plan Price: " << endl;
                    cin >> newPrice;
                    plan.setPrice(newPrice);
                    plan.displayInfo();
                }
                else if (edit_parameter == 4) {
                    cout << "Enter new Meal plan Type: " << endl;
                    cin.ignore();
                    getline(cin, newType);
                    plan.setType(newType);
                    cout << "Enter new Meal plan Description: " << endl;
                    getline(cin, newDescription);
                    plan.setDescription(newDescription);
                    cout << "Enter new Meal plan Price: " << endl;
                    cin >> newPrice;
                    plan.setPrice(newPrice);
                    plan.displayInfo();
                }





            }
        }
        else if (meal_plan_choice == 3) {
            cout << "Meal Plans List:" << endl;
            int count = 1;
            int deleted_plan;
            for (const MealPlan& plan : mealPlans) {
                cout << "Plan Number: " << count << endl;
                plan.displayInfo();
                cout << endl;
                count++;
            }
            cout << "Which plan do you want to delete?: " << endl;
            cin >> deleted_plan;
            if (deleted_plan >= 1 && deleted_plan <= mealPlans.size()) {
                mealPlans.erase(mealPlans.begin() + deleted_plan - 1);
                cout << "Plan successfully deleted." << endl;
            }
            else cout << "Invalid plan." << endl;

        }
        else if (meal_plan_choice == 4) break;
    }
}




void editting_menu() {

    while (true) {
        int choice, meal_plan_choice;
        cout << "Editing menu" << endl
            << "-------------------" << endl
            << "1: Hotel Buildings" << endl
            << "2: Rooms" << endl
            << "3: Meal Plans" << endl
            << "4: Cleaning Schedules" << endl
            << "5: Exit program" << endl;
        cin >> choice;

        if (choice == 1) {
            while (true) {
                cout << "Hotel Buildings";

            }
        }
        else if (choice == 2) {
            while (true) {
                cout << "Rooms";

            }
        }

        else if (choice == 3) {
            meal_plan_editting_menu();
        }
        else if (choice == 4) {
            while (true) {
                cout << "Cleaning Schedules";

            }
        }
        else if (choice == 5) {
            exit(1);
        }
    }



}

void register_account() {
    vector<User> users;
    string user;
    string password;
    string first_name;
    string last_name;
    string email;
    string phone;
    string address;
    cout << "Enter username: ";
    cin >> user;
    cout << endl << "Enter password: ";
    cin >> password;
    cout << endl << "Enter first name: ";
    cin >> first_name;
    cout << endl << "Enter last name: ";
    cin >> last_name;
    cout << endl << "Email: ";
    cin >> email;
    cout << endl << "Enter phone number: ";
    cin >> phone;
    cout << endl << "Enter address: ";
    cin.ignore();
    getline(cin, address);
    User new_user(user, password, first_name, last_name, email, phone, address);
    users.push_back(new_user);
}

void login_account() {
    cout << "login" << endl;
}

void booking_menu() {
    cout << endl;
    while (true) {
        int choice;
        cout << "1: Register" << endl
            << "2: Login" << endl
            << "3: Go back" << endl;
        cin >> choice;
        if (choice == 1) register_account();
        else if (choice == 2) login_account();
        else if (choice == 3) break;
    }
}



void main_menu() {
    while (true) {
        int first_choice;
        cout << "1: Make a booking" << endl
            << "2: Cancel booking" << endl
            << "3: Editting menu" << endl
            << "4: Exit Program" << endl;
        cin >> first_choice;

        if (first_choice == 1) booking_menu();

        else if (first_choice == 2); //not done

        else if (first_choice == 3) editting_menu();

        else if (first_choice == 4) exit(1);

    }
}


int main() { 

    main_menu();
    /*
    Payment payment;
    Discount discount;
    float discountRate;
    string couponCode;
    payment.setPaymentMethod("Cash");
    cout << "Payment Method: " << payment.getPaymentMethod() << endl;
    payment.setAmountPaid(100.0);
    cout << "Amount Paid: " << payment.getAmountPaid() << endl;

    cout << "Enter the discount rate: ";
    cin >> discountRate;
    discount.setDiscountRate(discountRate);
    cout << "Enter the coupon code: ";
    cin >> couponCode;
    discount.setCoupon(couponCode);
    float rate = discount.getDiscountRate();
    string coupon = discount.getCoupon();
    float originalAmount = 100.0f;
    float discountedAmount = discount.calculateDiscountedAmount(originalAmount);
    cout << "Discount Rate: " << rate << endl;
    cout << "Coupon: " << coupon << endl;
    cout << "Original Amount: " << originalAmount << endl;
    cout << "Discounted Amount: " << discountedAmount << endl; */
}
