package BuiltIn;

public class StringBuilder {
    public static void main(String[] args){
        StringBuilder sb = new StringBuilder();
        sb.append("Hello");           // Append a string
        sb.append(" World");          // Append another string
        sb.insert(5, ",");            // Insert a comma at index 5
        sb.replace(6, 11, "there");   // Replace a substring
        sb.delete(12, sb.length());   // Delete from index 12 onwards

        String result = sb.toString(); // Convert StringBuilder to a String

        System.out.println(result);   // Output: Hello, there
        System.out.println(sb.reverse()); //can reverse a string easily


        //Can do StringBuilder(s) to inline making it
    }
}
