# Hotel Management System

The Hotel Management System is a project that aims to automate and streamline various tasks involved in managing a hotel, such as room bookings and food orders. The system allows users to interact with a menu-based interface to perform different operations related to rooms and food items. It keeps track of available quantities, sales, and total collections for the day.

## Features
The Hotel Management System includes the following features:

1. Room Management:
   - Users can check the availability of rooms.
   - Rooms can be allocated to guests based on the desired quantity.
   - The system keeps track of the number of rooms allocated and the remaining rooms.

2. Food Ordering:
   - Users can select from a variety of food items such as pasta, burger, noodles, shakes, and chicken.
   - The system checks the availability of each item before placing the order.
   - Quantities are updated based on the user's order, and the total price for each item is calculated.

3. Sales and Collection Information:
   - Users can view the details of sales and collections for the day.
   - The system provides information on the number of rooms available, rooms allocated, remaining rooms, and total collection for rooms.
   - It also displays similar details for each food item, including quantity available, quantity sold, remaining quantity, and total collection.

4. User-Friendly Interface:
   - The system presents a menu-based interface for easy navigation.
   - Users can select options using numeric input and receive appropriate messages based on their choices.

## How to Use
To use the Hotel Management System, follow these steps:

1. Run the program.
2. Enter the quantities available for rooms, pasta, burger, noodles, shakes, and chicken.
3. Select from the menu options to perform different tasks:
   - Choose option 1 to allocate rooms.
   - Choose option 2 to order pasta.
   - Choose option 3 to order a burger.
   - Choose option 4 to order noodles.
   - Choose option 5 to order shakes.
   - Choose option 6 to order chicken.
   - Choose option 7 to view sales and collection information.
   - Choose option 8 to exit the program.
4. Based on the selected option, follow the prompts to enter the desired quantity or view information.
5. The system will provide relevant feedback and update the quantities and collections accordingly.
6. You can continue selecting options from the menu until you choose to exit the program.

## Limitations and Future Enhancements
The provided code for the Hotel Management System serves as a basic implementation and has a few limitations:

- Lack of input validation: The code does not check for invalid inputs, such as non-numeric characters or negative quantities. Adding input validation would enhance the robustness of the system.
- Lack of error handling: The code does not handle errors or exceptions that may occur during runtime. Implementing error handling mechanisms would improve the stability of the system.
- Lack of data persistence: The current implementation does not store data between program runs. Adding data storage capabilities, such as using a database, would allow for data persistence and retrieval of information across multiple sessions.

To enhance the system, the following features could be considered:

- User authentication and roles: Implementing user authentication would allow for different levels of access and control within the system, such as administrator and guest roles.
- Reservation management: Adding functionality to manage room reservations, including check-in and check-out dates, guest information, and room availability.
- Reporting and analytics: Incorporating reporting capabilities to generate sales reports, occupancy rates, and other statistical data to aid in decision-making and analysis.
- Online booking and payment: Integrating an online booking system with payment processing capabilities to allow customers to make reservations and payments through the system.

By addressing these limitations and adding further enhancements, the Hotel Management System can become a more comprehensive and efficient solution for hotel management operations.
