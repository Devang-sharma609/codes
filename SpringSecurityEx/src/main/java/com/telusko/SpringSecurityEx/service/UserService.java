package com.telusko.SpringSecurityEx.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.telusko.SpringSecurityEx.models.AppUser;
import com.telusko.SpringSecurityEx.repo.UserRepo;

@Service
public class UserService {

    @Autowired
    private UserRepo repo;

    public AppUser register(AppUser user){
        return repo.save(user);
    }
}
