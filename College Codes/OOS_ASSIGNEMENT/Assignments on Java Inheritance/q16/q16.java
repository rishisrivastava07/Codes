/*
Name : Rishi Srivastava Roll No : 302211001002

A bookshop maintains the inventory of books that are being sold at the shop. The list
includes details such as author, title, publisher, cost and stock position. Whenever a customer
wants a book, the sales person inputs the title and author and the system searches the list and
displays whether it is available or not. If it is not, an appropriate message is displayed. If it is,
then the system displays the book details and details and requests for the number of copies
required. If the required copies are available, the total cost of the requested copies is displayed,
otherwise the message “requires copies not in stock” is displayed. Design a system using a class
called “Book” with suitable member methods and constructors.
*/

import java.io.*;
import java.util.*;

class Book{
    protected String title,author,publisher;
    protected float cost;
    protected int stockPosition;

    
    Book(){
        title = "no-name";
        author = "no-name";
        publisher = "no-name";
        cost = 0;
        stockPosition = 0;
    }

    Book(String title, String author, String publisher, float cost, int stocks){
        this.title = title;
        this.author = author;
        this.publisher = publisher;
        this.cost = cost;
        stockPosition = stocks;
    }

    boolean availableStocks(int st){
        return (stockPosition >= st);
    }

    void del(int i){
		stockPosition -= i;
	}

    void BooksDetails(){
        System.out.println("Title = " + title);
        System.out.println("Author = " + author);
        System.out.println("Publisher = " + publisher);
        System.out.println("Cost = " + cost);
        System.out.println("Available Stocks = " + stockPosition);
    }
}

class BookInventory{
    ArrayList <Book> books;

    BookInventory(){
        books = new ArrayList<Book>();
    }

    void add(String title, String auth, String pub, float cost, int copies){
        Book b = new Book(title,auth,pub,cost,copies);
        books.add(b);
    }

    Book search(String name,String auth){
		for(Book b:books){
			if(b.title.equals(name) && b.author.equals(auth)){
		        return b;
	        }
        }
        return null;
    }
}

class Main{
    public static void main(String[] args) throws Exception {
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));

        BookInventory bookStore = new BookInventory();

        System.out.println("No of books to be in the bookshop = ");
        int n = Integer.parseInt(bfr.readLine());

        for(int i = 0; i < n; i++){
            System.out.println("Enter the details of book " + (i+1) + " :- ");
            System.out.print("Title of Book = ");
            String title = bfr.readLine();
            System.out.print("Author of Book = ");
            String auth = bfr.readLine();
            System.out.print("Publisher of Book = ");
            String pub = bfr.readLine();
            System.out.print("Cost of Book = ");
            int cost = Integer.parseInt(bfr.readLine());
            System.out.print("Copies of Book = ");
            int copy = Integer.parseInt(bfr.readLine());
            
            bookStore.add(title, auth, pub, cost, copy);
        }

        char choice = 'y';
        do{
            System.out.println("Enter the details of book to search = ");
            System.out.print("Enter the Title = ");
            String name = bfr.readLine();
            System.out.print("Enter the Author = ");
            String author = bfr.readLine();

            Book currbook = (bookStore.search(name, author));

            if(currbook == null){
                System.out.println("Not Available");
                continue;
            }

            currbook.BooksDetails();

            System.out.print("Enter the copies reqiured = ");
            int copies = Integer.parseInt(bfr.readLine());

            if(currbook.availableStocks(copies)){
                currbook.del(copies);
            }
            else{
                System.out.println("Requires copies not in stock");
                continue;
            }
            System.out.println("Total Cost = " + currbook.cost*copies);

            System.out.print("Search for more books (y/n) : ");
            choice = (char)bfr.read();
        }while(choice == 'Y' || choice == 'y');
    }
}

