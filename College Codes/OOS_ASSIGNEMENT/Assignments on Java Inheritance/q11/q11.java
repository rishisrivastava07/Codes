/*
Name: Rishi Srivastava, Roll: 302211001002

Create an abstract class “Publication” with data members ‘noOfPages’, ‘price’,
‘publisherName’ etc. with their accessor/modifier functions. Now create two sub-classes “Book”
and “Journal”. Create a class Library that contains a list of Publications. Write a main() function
and create three Books and two Journals, add them to library and print the details of all
publications.
*/

import java.io.*;

abstract class Publication{
    private int noOfPages;
    private float price;
    private String publisherName;

    Publication(){
        noOfPages = 0;
        price = (float) 0.0;
        publisherName = "no-name";
    }

    Publication(int pages, float cost, String name){
        noOfPages = pages;
        price = cost;
        publisherName = name;
    }

    public void display(){
        System.out.println("Book Price = " + price);
        System.out.println("Book Pages = " + noOfPages);
        System.out.println("Book Publisher Name = " + publisherName);
    }
}

class Book extends Publication{
    Book(int pages, float cost, String name){
        super(pages,cost,name);
    }
}

class Journal extends Publication{
    Journal(int pages, float cost, String name){
        super(pages,cost,name);
    }
}

class Library{
    public static void main(String[] args) throws Exception {
        
        BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));

        Book[] books = new Book[3];
        Journal[] journals = new Journal[2];

        
        for(int i = 0; i < 3; i++){
            System.out.println("Enter the details of Book " + (i+1));
            
            System.out.print("Enter the no of pages = ");
            int pages = Integer.parseInt(bfr.readLine());
            
            System.out.print("Enter the price = ");
            float price = Float.parseFloat(bfr.readLine());
            
            System.out.print("Enter the publisher name = ");
            String name = bfr.readLine();

            books[i] = new Book(pages,price,name);
        }


        for(int i = 0; i < 2; i++){
            System.out.println("Enter the details of Journals " + (i+1));
            
            System.out.print("Enter the no of pages = ");
            int pages = Integer.parseInt(bfr.readLine());
            
            System.out.print("Enter the price = ");
            float price = Float.parseFloat(bfr.readLine());
            
            System.out.print("Enter the publisher name = ");
            String name = bfr.readLine();

            journals[i] = new Journal(pages,price,name);
        }
        System.out.println("Details of Books in Library");
        for(int i = 0; i < 3; i++){
            books[i].display();
        }
        
        System.out.println();
        
        System.out.println("Details of Journals in Library");
        for(int i = 0; i < 2; i++){
            journals[i].display();
        }
    }
}
