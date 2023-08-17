# DSA-Final-Project

# Project Title: 
# Internet Company Directory System with Admin and User Portals

# Project Description:

In this Data Structures and Algorithms (DSA) project, I have developed an Internet Company Directory System that utilizes the concepts of LinkedLists, Queue, and Stack. The system consists of both an admin portal and a user portal, providing user authentication, personal information management, package selection and modification, user details display, logout functionality, and complaint handling. The system facilitates efficient management of user data and internet packages for the internet company.

# Features and Functionality:

# Admin Portal:

# Authentication: 
The admin can log in securely using a username and password.
# Package Management:
View Packages: The admin can view the details of all existing internet packages.
Modify Packages: The admin can update the information related to existing internet packages, such as speed, data limit, and price.
Delete Outdated Packages: The admin can remove outdated or unused internet packages from the system.
# User Management:
View Users: The admin can view the list of registered users and their details.
Delete Users: The admin can delete users from the system when required.
# User Portal:

# Authentication: Users can log in using their credentials which are predefined (***).
# Personal Information:
View User Details: Users can view their personal information, including name, contact details, and selected package.
Change Package: Users can select and change their internet package according to their requirements.
# Complaint Handling:
Register Complaint: Users can submit complaints about internet services or issues, which are stored in a queue for the company to address.
Logout: Users can log out of their account to ensure security.
# Data Structures Implementation:

# LinkedLists:

Linked lists are used to manage and store user information efficiently.
Each user's data is stored in a linked list node, including personal details and selected package information.
# Queue:

A queue is implemented to store user complaints.
When a user submits a complaint, it is added to the end of the queue.
The internet company can process complaints in a first-come, first-served manner.
# Stack:

A stack is used for authentication purposes.
Passwords are securely stored using a hash function and stored in a stack-like data structure for comparison during login.
# Project Flow:

Users and admin authenticate themselves using their respective credentials.
Upon successful authentication, users/admin are redirected to their respective portals.
Users can view their details, select/change packages, submit complaints, and log out.
Admins can manage packages, view user details, delete users, and log out.
User complaints are stored in a queue, ensuring a fair resolution process.
Admins can modify existing packages and remove outdated ones using linked lists and appropriate data structures.
# Conclusion:

This Internet Company Directory System project demonstrates the practical implementation of data structures (LinkedLists, Queue, and Stack) in a real-world scenario. It provides essential functionalities for both users and the internet company, ensuring efficient package management, user details handling, and complaint processing. The system aims to enhance the overall user experience and streamline administrative tasks within the internet company.
