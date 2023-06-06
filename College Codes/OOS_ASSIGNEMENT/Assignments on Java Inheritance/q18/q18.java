/*
Name : Rishi Srivastava Roll No : 302211001002

Write two interfaces “Fruit” and “Vegetable” containing methods ‘hasAPeel’ and
‘hasARoot’. Now write a class “Tomato” implementing Fruit and Vegetable. Instantiate an
object of Tomato. Print the details of this object.
*/

interface Fruit{
    void hasAPeel();
}

interface Vegetable{
    void hasARoot();
}

class Tomato implements Fruit, Vegetable{
    public void hasAPeel(){
        System.out.println("hasAPeel() ---> Inherited from Fruit Interface");
    }
    public void hasARoot(){
        System.out.println("hasARoot() ---> Inherited from Vegetable Interface");
    }

    void display(){
        System.out.println("Inherited from both the Interface (Fruit and Vegetable)");
        hasAPeel();
        hasARoot();
    }
    public static void main(String[] args) {
        Tomato t = new Tomato();
        t.display();
    }
}


