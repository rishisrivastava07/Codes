/*
Name: Rishi Srivastava, Roll: 302211001002

Implement a class for a “Book”. Book contains a title (a String), a list of authors (array of
authors), number of pages (an integer), price (floating point number), publisher (a String) etc.
Write suitable constructor and accessor/modifier methods.
Implement a class for “Library”. A library contains a list of books (array of Book). Write add (to
add a book) and remove (to delete a book) methods for library.
Write a main() function to create a “Library” and add five “Book” to library. Print the total price
of all books.
*/

import java.io.*;

class Book{
    protected String title;
    private String[] listOfAuthors;
    protected int noOfPages;
    private float price;
    protected String publisher;

    Book(String title, String[] loa, int pages, float cost, String publisher){
        listOfAuthors = new String[loa.length];
        this.title = title;
        for (int i = 0; i < loa.length; i++) {
            listOfAuthors[i] = loa[i];
        }
        noOfPages = pages;
        price = cost;
        this.publisher = publisher;
    }

    protected void bookDetails(){
        System.out.println("Details of Book");
        System.out.println("Title = " + title);
        for (int i = 0; i < listOfAuthors.length; i++) {
            System.out.println((i+1) + ". " + listOfAuthors[i]);
        }
        System.out.println("Number of Pages = " + noOfPages);
        System.out.println("Price = " + price);
        System.out.println("Publisher = " + publisher);
    }

    float getPrice(){
        return price;
    }
}
class Library{
    private Book[] books;
    protected int counter;

    Library(int noOfBooks){
        books = new Book[noOfBooks];
        counter = 0;
    }

    public void add(String title, String[] loa, int pages, float cost, String publisher){
        books[counter++] = new Book(title, loa, pages, cost, publisher);
        System.out.println(" ----- Book added to the Library -----");
    }

    public void delete(String title, String publisher){
        for(int i = 0; i < counter; i++){
            if(books[i].title == title && books[i].publisher == publisher){
                while(i < counter-1){
					books[i] = books[i+1];
					i++;
				} 
				counter--;
				break;
            }
        }
        System.out.println(" ----- Book removed from the Library -----");
    }

    public void display(String title){
        
        for(int i = 0; i < counter; i++){
            if(books[i].title == title){
                books[i].bookDetails();
                break;
            }
        }  
        System.out.println("Book Not Found !!! ");
    }

    public static void main(String[] args) throws Exception {
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter size of library :");
	    int n = Integer.parseInt(bfr.readLine());
        Library books = new Library(n);
        String[] loa = new String[3];

        
        while(true){
            System.out.println("---- Operations ----");
            System.out.println("1. Add Book in Library");
            System.out.println("2. Delete Book in Library");
            System.out.println("3. Print Book Detail in Library");
            System.out.println("4. Exit");
            System.out.print("Enter your choice = ");
            int choice  = Integer.parseInt(bfr.readLine());
            switch(choice){
                case 1:
                    System.out.println("Add a Book in Library");
                    System.out.print("Title = ");
                    String title = bfr.readLine();
                    for (int i = 0; i < 3; i++) {
                        System.out.print("Author = " + (i+1));
                        loa[i] = bfr.readLine();
                    }
                    System.out.print("Number of Pages = ");
                    int noOfPages = Integer.parseInt(bfr.readLine());
                    System.out.print("Price = ");
                    float price = Float.parseFloat(bfr.readLine());
                    System.out.print("Publisher = ");
                    String publisher = bfr.readLine();

                    books.add(title, loa, noOfPages, price, publisher);
                    break;
                case 2:
                    System.out.println("Remove a Book in Library");
                    System.out.print("Title = ");
                    String title1 = bfr.readLine();
                    System.out.print("Publisher = ");
                    String publisher1 = bfr.readLine();

                    books.delete(title1, publisher1);
                    break;
                case 3:
                    System.out.println("Display a Book in Library");
                    for(int i = 0; i < n; i++){
                        books.books[i].bookDetails();
                    }
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Wrong Choice !!");
            }
        }
    }
}
