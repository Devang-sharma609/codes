package com.telusko.SpringSecurityEx.repo;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.telusko.SpringSecurityEx.models.AppUser;

@Repository
public interface UserRepo extends JpaRepository<AppUser, Integer> {

    public AppUser findByUsername(String username);
}