package com.telusko.SpringSecurityEx.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.stereotype.Service;

import com.telusko.SpringSecurityEx.models.AppUser;
import com.telusko.SpringSecurityEx.models.UserPrincipal;
import com.telusko.SpringSecurityEx.repo.UserRepo;

@Service
public class CustomUserDetailsService implements UserDetailsService{

    @Autowired
    private UserRepo repo;

    @Override
    public UserDetails loadUserByUsername(String username) throws UsernameNotFoundException {
        AppUser user = repo.findByUsername(username);

        if (user==null) {
            throw new UsernameNotFoundException("User not found");
        }
        return new UserPrincipal(user);
    }
    
}
