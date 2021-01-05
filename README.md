# 2D Histogram Filter.
2D Histogram is used to analyze the relationship among two data variables which has wide range of values. 
A 2D histogram is very similar like 1D histogram. The class intervals of the data set are plotted on both x and y axis. 
Unlike 1D histogram, it drawn by including the total number of combinations of the values which occur in intervals of x and y, and marking the densities. It is useful when there is a large amount of data in a discrete distribution, and simplifies it by visualizing the points where the frequencies if variables are dense.

Udacity Intro to Self-Driving Cars Nanodegree Project : 2D Histogram Filter in C++

![alt](https://github.com/jackyhuynh/2D-Histogram-Filter/blob/master/src/picture/histogram_filter_example.png)

## Technology
- C++ Programming
- g++ compiler
- data structures
- C++ Optimization methods
- Object Oriented Programming
- Self-Driving Car Development

## Getting Started
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites
What things you need to install the software and how to install them
- Command-Prompt for Visual Studio: Same goes here. For this particular project, I highly recommend using Command-Prompt instead of the IDE.
- Linux: Program can be run on Linux System (if you are familiar with the Linux command line). 

### Installing

A step by step series of examples that tell you how to get a development env running

Visual Studio & Command-Prompt for Visual Studio:
* [Install Visual Studio](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=msvc-160#:~:text=Visual%20Studio%202019%20Installation%201%20Make%20sure%20your,...%204%20Choose%20workloads.%20...%20More%20items...) - If you haven't downloaded and installed Visual Studio and the Microsoft C/C++ tools yet, here's how to get started.
* [Developer Command Prompt for Visual Studio](https://docs.microsoft.com/en-us/dotnet/framework/tools/developer-command-prompt-for-vs#:~:text=%20Developer%20Command%20Prompt%20for%20Visual%20Studio%20,from%20inside%20Visual%20Studio.%20For%20easier...%20More) - Developer Command Prompt for Visual Studio enables you to use .NET Framework tools more easily. It's a command prompt that automatically sets specific environment variables. After opening Developer Command Prompt, you can enter the commands for .NET Framework tools such as ildasm or clrver.

Linux Ubuntu 18.4 LTS
* [Linux Ubuntu 18.4 LTS](https://www.microsoft.com/en-us/p/ubuntu-1804-lts/9n9tngvndl3q?activetab=pivot:overviewtab) can be download at Microsoft Store

## Running the tests

Explain how to run the automated tests for this system:
* [Linux Compilers](https://askubuntu.com/questions/61408/what-is-a-command-to-compile-and-run-c-programs#:~:text=The%20simplest%20way%20to%20compile%20a%20C%2B%2B%20program,only%20compiler%20capable%20of%20compiling%20the%20Linux%20kernel.)- Locate the home folder that contains the program (by using the cd command). Call the g++ compiler and execute.
* [Visual Studio Command Line](https://docs.microsoft.com/en-us/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line?view=msvc-160)
- Simply type this in the Linux terminal window:
```
cd optimized_code

g++ -std=c++11 main.cpp blur_improved.cpp initialize_beliefs_improved.cpp move_improved.cpp normalize_improved.cpp print.cpp sense_improved.cpp zeros_improved.cpp

./a.out
```
### Result

![alt](https://github.com/jackyhuynh/2D-Histogram-Filter/blob/master/src/picture/Result.PNG)

## Deployment

Can be deployed to any embedded system without any problem. Can also make an API or library using this code. 

## Built With

* [Microsoft Visual Studio](https://visualstudio.microsoft.com/downloads/) - The full-featured integrated development environment (IDE) for Android, iOS, Windows, web, and cloud.
* [.NET](https://dotnet.microsoft.com/download/dotnet-framework) -  Free. Cross-platform. Open-source. A developer platform for building the Internet of Things (IoT), Microservices, Desktop, Cloud, Mobile, Machine Learning, Web, Game.

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Truc Huynh** - *Initial work* - [TrucDev](https://github.com/jackyhuynh)

## Format
my README.md format was retrieved from
* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details




