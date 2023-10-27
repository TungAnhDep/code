package main;

import java.io.Serializable;

public class Customer implements Serializable {
    private String code;
    private String fullName,firstName,lastName;
    private String bod;
    private String type;
    static int i=0;
//    Customer(String code, String fullName, String bod, String type){
//        code = String.format("%05d",i++);
//        this.code=code;
//        this.fullName=fullName;
//        this.bod=bod;
//        this.type=type;
//    }
    void setCode(String code){
        this.code=code;
    }
    void setFirstName(String firstName){
        this.firstName=firstName;
    }
    void setLastName(String lastName){
        this.lastName=lastName;
    }
    void setFullName(String fullName){
        this.fullName=fullName;
    }
    public String getFullName(){

        return firstName+" "+lastName;
    }
    void setBirthDate(String bod){
        this.bod=bod;
    }
    void setType(String type){
        this.type=type;
    }
    public String toString() {
        return "Code: " + code + ", First Name: " + firstName + ", Last name: "+lastName+ ", Birth Date: " + bod + ", Type: " + type;
    }

    public String getCode() {
        return code;
    }

    public String getFirstName() {
        return firstName;
    }

    public java.lang.String getLastName() {
        return lastName;
    }

    public String getBirthDate() {
        return bod;
    }

    public String getType() {
        return type;
    }
}
