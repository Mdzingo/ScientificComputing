#!/usr/bin/env python
#Morgan Monzingo
#python part b

import numpy as np
import matplotlib.pyplot as plt


#load each matrix from cpp into py
n = np.loadtxt("n.txt")
h = np.loadtxt("h.txt")
r = np.loadtxt("littler.txt")
R = np.loadtxt("R.txt")

#graph the first semilogy graph with r vs n and R vs n
graph3 = plt.figure(1)
graph3 = plt.semilogy(n, r, 'b', label = "r vs n")
graph3 = plt.semilogy(n, R, 'r--', label = "R vs n")
graph3 = plt.legend()
graph3 = plt.ylabel("Error")
graph3 = plt.xlabel("n")
graph3 = plt.title("Error in a Backward Finite Difference (semilogy)")
plt.show()

#graph the loglog graph with r vs h and R vs H
graph4 = plt.figure(2)
graph4 = plt.loglog(h, r, 'b', label = "r vs h")
graph4 = plt.loglog(h, R, 'r--', label = "R vs h")
graph4 = plt.legend()
graph4 = plt.ylabel("Error")
graph4 = plt.xlabel("h")
graph4 = plt.title("Error in a Backward Finite Difference (loglog)")
plt.show()

