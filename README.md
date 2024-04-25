<!-- @format -->

# csc240_group_lab

CSC240 group lab with Atriety and yichenzhao8

## Project Purpose

The project is a simulation of a game inspired by "Among Us". It simulates interactions between crew members and impostors, where crew members complete tasks while trying to identify and eliminate impostors. Impostors, on the other hand, try to sabotage the crew and eliminate them without getting caught.

## Expected Input

The program does not take direct input from the user during runtime. Input is predefined within the program's code by creating instances of players (crew members and impostors) with specific attributes and actions.

## Expected Output

The program outputs information about the players' actions, such as players' status and game results. At the end of the game, the program prints the outcome: whether the crewmates win or the impostors win based on the remaining players.

## Data Structure Chosen

An unsorted linked list is chosen to store player objects, offering dynamic management capabilities with constant-time insertion and deletion. Despite linear-time traversal, it efficiently handles player interactions in the game simulation, ensuring smooth gameplay and streamlined code.
