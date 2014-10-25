#!/usr/bin/env python
#Morgan Monzingo
#Project 1 
#9.8.14

import numpy as np
import matplotlib.pyplot as plt

#load all files into variables

z = np.loadtxt("z.txt")
f = np.loadtxt("f.txt")
p5 = np.loadtxt("p5.txt")
p9 = np.loadtxt("p9.txt")
p13 = np.loadtxt("p13.txt")
err5 = np.loadtxt("err5.txt")
err9 = np.loadtxt("err9.txt")
err13 = np.loadtxt("err13.txt")

#set graph one as the standard plad of f,p5,p9,p13 vs z
graph1 = plt.figure(1)
graph1 = plt.plot(z,f, 'b--', label="sin(x)")
graph1 = plt.plot(z,p5, 'r', label="p5")
graph1 = plt.plot(z,p9, 'm', label="p9")
graph1 = plt.plot(z,p13,'k',  label="p13")
graph1 = plt.legend()
graph1 = plt.ylabel("value of polynomial")
graph1 = plt.xlabel("z")
graph1 = plt.title("sin(x) taylor series")
plt.show()

#plot the semi#logy graph of all of the error
graph2 = plt.figure(2)
graph2 = plt.semilogy(z,err5, label = "err5")
graph2 = plt.semilogy(z,err9, label = "err9")
graph2 = plt.semilogy(z,err13, label = "err13")
graph2 = plt.legend()
graph2 = plt.ylabel("error")
graph2 = plt.xlabel("z")
graph2 = plt.title("Error")
plt.show()


