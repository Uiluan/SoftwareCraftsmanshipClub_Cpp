# Orion Spellwind's Bag of Holding Kata:
The wizard Orion Spellwind had a magical bag of holding.  This bag holds all of Orion's magical
items.  Each item is retrieved with a different specific incantation of words.  However Orion is
getting old and struggling to remember all his incantations.  Thus Orion requires a modern solution
this this old magical problem.  Create a system that can help Orion remember his incantations to
summon his items.

## Requirements:
Each item has a name, a rarity, a description, and an incantation associated with it.  Create a data
structure that has an ordered index of rarity, and an unordered index by name.  Looking up an
incantation by name should be O(1).  Sometimes Orion likes to show off by searching for items by
rarity however.  Looking up an incantation by rarity should be O(log(n)).  Looking up the most rare
item should be O(1).  Looking up the top N rarity items should be O(n(log(N))).  Adding an item
should be O(n(log(N))) on average (or O(n(log(N)) in the worst case if index mapping reallocation
is required.)  Removing an item should be maximally O(N(log(N))).

## Stretch goals:
* Orion does spring cleaning once a year and removes a large number of items from his bag.
Perform a cleanup of unused space to keep the search fast and efficient which can be run after
removing a large number of items.

* Data should be chunked/pooled to help improve data locality to improve cache misses by reducing
misses for the primary data storage structure.

* Data should not be duplicated for descriptions or incantations for a single item.  Store them
only once(you may point to them).

* Allow for duplicate items(for instance two identical magic swords with the same rarity, and
name, but (optionally)different incantations for retrieval)


# Docker
The project has been dockerized for convience. If you have docker installed, build and run the app
using the following:
```
docker build --target=app -t <projectName>-app .
docker run <projectName>-app
```

To build and run the google tests, run the following:
```
docker build --target=tests -t <projectName>-tests .
docker run <projectName>-tests
```
