#This repo contains all the problems/Solutions that i did during learning C Language.
use the git clone https://github.com/GoofieDragon/C-Programs.git for cloning a remote repo to local machine.
use the ls -la in git bash terminal to list all the files and check for 
.git file to verify that it's indeed a remote repository.
now use git status to check for items to track.
use the git add . for tracking all the changes to commit or use specific file name after add to just track only that file.
use ssh-keygen -t rsa -b 4096 -C "youroriginalgithub@email"
finding the generated ssh key through ls | grep keyName or clip < ~/.ssh/id_ed25519.pub(Stored inside Dragon\.ssh\id_rsa).
& 'C:\Program Files\Git\bin\sh.exe' --login used to lauch git bash in powershell.
git init for initialing a local repo to make it remote.
git remote add origin /path of the new repo which was created in github to store this local repo.
git remote -v to check for any remote repo which was connected to this local repo.
git push -u origin main --> to exclude writing origin main again used the -u for upstream and now only have to write git push and it pushes to the specified repo by default.


