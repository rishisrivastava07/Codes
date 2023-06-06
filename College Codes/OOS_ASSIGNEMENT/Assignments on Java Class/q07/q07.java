/*
Name: Rishi Srivastava, Roll: 302211001002

Implement a class for “Date”. Write member functions for (i) getting the previous day, (iv)
getting the next day, (iii) printing a day
There should be four constructors: (i) day, month and year are initialized to 01, 01, 1970; (ii) day
is initialized to user specified value but month and year are initialized to 01, 1970; (iii) day,
month are initialized to user specified value but year is initialized to 1970; (iv) day, month and
year are initialized to user defined values.
Also, write a main() function to (i) create a date object; (ii) print the next and the previous day.
*/

class Date{
    private int day;
    private int month;
    private int year;

    Date(){
        day = 01;
        month = 01;
        year = 1970;
    }
    Date(int day){
        if (day > 31 || day <= 0) {
            System.out.println("Day is invalid");
        } 
        else {
            this.day = day;
            month = 01;
            year = 1970;
        }
    }
    Date(int day, int month){
        
        if (month > 12 || month <= 0) {
            System.out.println("Month is invalid, object can't be created");
            return;
        }
        
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31 || day <= 0) {
                System.out.println("Day is invalid");
            }
            
        } 
        else if (month == 2) {
            if (this.isLeapYear()) {
                if (day > 29 || day < 0) {
                    System.out.println("Day is invalid");
                }

            } 
            else {
                if (day > 28 || day < 0) {
                    System.out.println("Day is invalid");
                }
            }
            
        } 
        else {
            if (day > 30 || day < 0) {
                System.out.println("Day is invalid");
            }
        }
        
        this.day = day;
        this.month = month;
        this.year = 1970;
        
    }
    Date(int day, int month, int year){
        if (month > 12 || month <= 0) {
            System.out.println("Month is invalid");
            return;
        }

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31 || day <= 0) {
                System.out.println("Day is invalid");
            }

        } 
        else if (month == 2) {
            if (this.isLeapYear()) {
                if (day > 29 || day < 0) {
                    System.out.println("Day is invalid");
                }

            } 
            else {
                if (day > 28 || day < 0) {
                    System.out.println("Day is invalid");
                }
            }

        } else {
            if (day > 30 || day < 0) {
                System.out.println("Day is invalid");
            }
        }

        this.day = day;
        this.month = month;
        this.year = year;
    }

    public boolean isLeapYear() {
        boolean isLeapYear = false;
        if (year % 4 == 0) {

            if (year % 100 == 0) {

                if (year % 400 == 0)
                    isLeapYear = true;
                else
                    isLeapYear = false;
            }

            isLeapYear = true;

        } else
            isLeapYear = false;

        return isLeapYear;
    }
    public String toString() {
        String d = new String();
        if (day < 10)
            d += '0';

        d += day + "-";

        if (month < 10)
            d += '0';
        d += month + "-" + year;

        return d;
    }

    private boolean isLastDayOfMonth() {

        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                && day == 31)
            return true;

        else if (this.isLeapYear() && month == 2 && day == 29)
            return true;
        else if(!this.isLeapYear() && month == 2 && day == 28)
           return true;
        else if (day == 30)
            return true;

        return false;
    }

    private boolean isLastMonthOfYear() {
        if (month == 12)
            return true;
        else
            return false;
    }

    private int lastDayOfMonth() {
        if (month == 4 || month == 6 || month == 9 || month == 11 )
            return 30;

        if (month == 2) {
            if (this.isLeapYear())
                return 29;
            else
                return 28;
        } else
            return 31;

    }

    public Date nextDay() {
        int d = day, m = month, y = year;

        if (this.isLastDayOfMonth()) {
            if (!isLastMonthOfYear()) {
                d = 1;
                m++;

            } else {
                d = 1;
                month = 1;
                year++;
            }
        } else {
            d++;
        }

        return new Date(d, m, y);

    }

    public Date previousDay() {
        int d = day, m = month, y = year;

        if (day == 1) {
            if (month == 1) {
                d = 31;
                m = 12;
                y--;
            } else {

                Date temp = new Date(d, m - 1, y);
                d = temp.lastDayOfMonth();
                m = month - 1;
            }
        } else
            d--;

        return new Date(d, m, y);
    }
    public void display()
    {
      System.out.println(" " + this.day + '/' + this.month + '/' + this.year);  
    }
}

class Demo{
    public static void main(String[] args) {
        Date date = new Date(04,06,2022);

        System.out.print("Current Date : ");
        date.display();
        
        Date nexDate = date.nextDay();
        System.out.print("Next Date : ");
        nexDate.display();

        Date prevDate = date.previousDay();
        System.out.print("Previous Date : ");
        prevDate.display();
    }
}
