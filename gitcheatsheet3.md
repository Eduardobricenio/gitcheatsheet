# chaper 2


/* This section will show a summary of the basic functions of git * seen in class.
It is possible to differentiate the commands in git, between those intended to be used to manage the local working directory or those whose objective is to manage the remote repository linked to the local repository.

   A summary of the local repository management command are as follows */
   
   
 
git init 
//Set up a directory to be monitored by Git. To do this, configure the working directory, which consists of the project statistics, the index or staging area and a local repository where the commitments will be stored.

git add 
//Add untracked and modified files to the index 

git reset 
//Inverse to git add, extracts the indicated files from the index by returning them to the working directory.

git commit 
//Makes a new "photo" of the project in its current state. This creates a new commit in the project history.
//git commit -m "description"

git status 
//Indicates the current situation of the files that make up the working directory
git status -s


git log
//Shows the history of commits of the project in visua

git checkout 
//It allows you to switch between the different branches of which a project is composed.
git clone
//Creates a local clone repository of the remote repository.




chapter 3


Branch management is a fundamental part of any version control system, allowing us to follow different paths simultaneously to achieve the ultimate goal.
In this way we can add new features to our project, whether it's a book, an image or an application... and see the result. Once we have seen how each of these branches have looked in our project, we will merge each branch with the main branch.


Create a new branch
//So, to create a branch of our project, we just have to execute the following command:
git branch new_rama
Changing branches

To switch from that main branch to the nueva_rama branch, we will execute the command:
git checkout new_rama
And if we want to go back to our main branch, again, we will execute the order:
git checkout master


//The solution is to execute the order:
git log --oneline
