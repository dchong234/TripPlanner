# Travel Planner
 
Authors: [Andrew Khadder](https://github.com/khandrew1),
          [Keshav Mannem](https://github.com/KeshavMannem),
          [Colin Thekkindath](https://github.com/colinthekkinedath),
          [David Chong](https://github.com/dchong234)

## Project Description

**General Description:**  
 Our Travel Planner is a multi user platform designed to streamline our user's vacations by providing an all in one hub for their trips. Users will be able to create accounts and from there be able to book flights, hotels, and activites in their desired vacation spot. They will be able to compare prices, hotel choices, and special packages to choose what would be the best for them. They will have access to a schedule for all their events for the duration of their trip and will be able to easily edit it should any new activites come up.

**Program Features**:  
The user will be able to create an account in order to easily track their vacations. They will be able to book flights, hotels and activites through our application and will be able to compare prices and hotel choices to see what is the best for them. Our program will tuhen generate a schedule of their planned vacation that they will be able to easily edit in case anything new would come up.

**Why it is important:**  
 This project is important to us because vacations are really hard to plan and can get messy quick, and we hope this project will be able to make the planning process easier so users can enjoy their vacation without worrying about every little detail. In our personal experiences, our vacations usually get messy due to poor planning and not enough research done before the trip. We hope our application can help remedy some of the stress that comes with planning on a vacation and so our users can simply focus on fun.

**Input/Output:**  
The first thing this program will do is ask a user to create an account or log in to an existing account. Afterwards they will be asked what they would like to do, book a trip, flight, hotel, packages or simply view their schedule. If the user decided to book something they will be prompted to choose a location they would like to travel to. Afterwards they will be given different options and prices to see what works best for them. As soon as they select a package, it will automatically get added to their schedule so they can have easy and quick access to it.

**Languages and Tools:**  
 **C++** - We will primarily code this project using C++  
 **Visual Studio Code** - This is an IDE we will be using in order to write and run our code  
 **Git** - Our version control software we will be using in order to keep our project streamlined, organized, and clean  
 **Github** - Our project will be hosted on Github, free and open source. We will be using its multiple features in order to better collaborate as a team  

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> The Navigation Diagram below displays the interface that the user will be interacting with when they want to view the travel planner. They will start with a log in and create an account option, and then they will be able to see the Main Menu. In the Main Menu, they will be allowed to view their trips, view their schedules, and plan a new trip. In the view trips menu, they can see their past and previous trips, as well as cancel future trips. In the schedule menu, the user can add or cancel activities on their trip. In the plan a new trip menu, the user will be able to book a flight, hotel, and trip activities of their choice. 

<img width="1208" alt="Screen Shot 2023-05-06 at 1 22 03 PM" src="https://user-images.githubusercontent.com/48158202/236645213-45c28027-7391-454e-a389-1f690eb6f11d.png">

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
