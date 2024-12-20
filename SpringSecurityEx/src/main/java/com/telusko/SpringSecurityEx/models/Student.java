package com.telusko.SpringSecurityEx.models;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.Setter;
import lombok.ToString;

@Getter
@Setter
@ToString
@AllArgsConstructor
public class Student {

    private int id;
    private String name;
    private int marks;
}
