package com.telusko.SpringSecurityEx.controllers;

import org.springframework.web.bind.annotation.RestController;

import com.telusko.SpringSecurityEx.models.Student;

import jakarta.servlet.http.HttpServletRequest;

import java.util.ArrayList;
import java.util.List;

import org.springframework.web.bind.annotation.GetMapping;


//main controller
@RestController
public class HomeController {
    

    //hardcoded demo students
    private List<Student> students = new ArrayList<>(List.of(
        new Student(11, "Devang", 33),
        new Student(14, "chawan", 36)
    ));


    @GetMapping("/")
    public String greet(HttpServletRequest request) {
        return "Hello "+request.getSession().getId();
    }  

    @GetMapping("/students")
    public List<Student> getStudents() {
        return students;
    }

    
}