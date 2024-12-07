package com.telusko.SpringSecurityEx.controllers;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.authentication.AuthenticationManager;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;

import com.telusko.SpringSecurityEx.models.AppUser;
import com.telusko.SpringSecurityEx.service.UserService;

import org.springframework.web.bind.annotation.RequestBody;


@RestController
public class UserController {

    @Autowired
    AuthenticationManager authenticationManager;

    @Autowired
    private UserService service;

    @PostMapping("/register")
    public AppUser register(@RequestBody AppUser user) {
        return service.register(user);
    }

    @PostMapping("/login")
    public String login(@RequestBody AppUser user) {
        return service.verify(user);
    }
    
}
