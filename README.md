
# Linux Turminal
we simpli use some system call (System calls provide the interface so that the process can communicate with the Operating System) to run our command we execvp system call and i also use wait and fork system call to exiting
 from process and creating new process

## Tech 
 Operating System (System Calls)


## Run Locally

Clone the project

```bash
  git clone https://github.com/jagdish4501/News_app.git
```

Go to the project directory  

```bash
    if you are in linux run following command
    gcc shell.c
    ./a.out 
    after running this command you entered in terminal which you  had made

    if You not in linux you can install wsl in your window or you can install linux in virtual machine
```

Install dependencies

```bash
  npm install
```

Start the server

```bash
  npm run start
```


# Lessons From This Project

###### how ```fork()``` create a similar new process and start executing from where parent executing and ```fork``` return value >0 to our parent process int return 0 to child process and if OS not able to execute ```fork``` then return -1 to parent 

### 
###### how ```execvp``` destroy its parent process and executive what instruction given to its 

### 
