/**
    Create a new repo on the command line 
 
    echo "# (NameofRepo)" >> README.md
    git init
    git add README.md
    git commit -m "first commit"
    git branch -M main
    git remote add origin (http URL)
    git push -u origin main
 
    Push an existing repo from the command line 
    git remote add origin (http URL)
    git branch -M main
    git push -u origin main

    Other useful stuff:
    git commit --date="2024-01-01 10:00:00" -m "Initial setup"
    git commit --date="YYYY-MM-DD HH:MM:SS" -m "Your commit message"
    git branch --set-upstream-to=origin/<branch> main

    git upstreams 

    If you’re on the branch you want to track (say main or feature-x):

    git push -u origin HEAD

    What this does:
    Pushes your current branch to origin
    Sets the upstream automatically

    From now on, you can just run:

    git pull
    git push

    This is the best one-liner and works even if the branch doesn’t exist yet on the remote.

    If the branch already exists on origin and you just need to link it:

    git branch --set-upstream-to=origin/<branch-name>

    Example:

    git branch --set-upstream-to=origin/main


    Now git pull works.
 */

