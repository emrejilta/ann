import math as m


# Distribution Functions

# Multiplication
def multiplication(n, net, threshold):
    i = 0
    weight = 1
    while i < n:
        weight *= (net[i] * threshold[i])
        i += 1
    return weight


# Maximum

def maximum(net, threshold):
    return max(net, threshold)

# Minimum


def minimum(net, threshold):
    return min(net, threshold)

# Sum


def sum(n, net, threshold):
    i = 0
    weight = 0
    while i < n:
        weight += (net[i] * threshold[i])
        i += 1
    return weight


# Cumulative Distribution

def cumulative(n, net, threshold):
    i = 0
    weight = 1
    while i < n:
        weight += weight * (net[i] * threshold[i])
        i += 1
    return weight


# Activation Functions

# Sigmoid

def sigmoid(x):
    return 1 / (1 + m.pow(m.e, -x))


# Linear

def linear(net):
    return net


# ReLu

def relu(net):
    if net > 1:
        return 1
    elif net > -1 or net < 1:
        return net
    else:
        return -1

# Step


def step(net, threshold):
    if net > threshold:
        return 1
    elif net <= threshold:
        return 0
    else:
        return -1


# Sinusoid

def sinusoid(net):
    return m.sin(m.radians(net))

# Hyperbolic Tangent


def htan(net):
    return m.tanh(m.radians(net))


# Hyperbolic Tangent - 2

def htan2(net):
    return (m.pow(m.e, net) + m.pow(m.e, -net)) / (m.pow(m.e, net) - m.pow(m.e, -net))
