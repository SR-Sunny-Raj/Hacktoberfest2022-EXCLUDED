import java.time.LocalDate;  
import java.time.Period;  
import java.util.Scanner;  
public class AgeCalculatorExample1  
{  
public static void main(String args[])   
{  
System.out.print("Enter date of birth in YYYY-MM-DD format: ");  
Scanner scanner = new Scanner(System.in);  
//reads the date of birth from the user  
String input = scanner.nextLine();  
scanner.close();  
//the parse() method obtains an instance of LocalDate from a text string such as 1992-08-11  
LocalDate dob = LocalDate.parse(input);  
//prints the age  
System.out.println("You are " + calculateAge(dob)+" years old.");  
}  
//the method calculates the age  
public static int calculateAge(LocalDate dob)   
{  
//creating an instance of the LocalDate class and invoking the now() method      
//now() method obtains the current date from the system clock in the default time zone      
LocalDate curDate = LocalDate.now();  
//calculates the amount of time between two dates and returns the years  
if ((dob != null) && (curDate != null))   
{  
return Period.between(dob, curDate).getYears();  
}  
else  
{  
return 0;  
}  
}  
}  
