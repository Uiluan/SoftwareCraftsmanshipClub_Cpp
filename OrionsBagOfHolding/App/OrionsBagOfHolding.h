#ifndef ORIONS_BAG_OF_HOLDING_H
#define ORIONS_BAG_OF_HOLDING_H

#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <unordered_map>
#include <list>
struct Item
{
    std::string description;
    std::string Incantation;
    std::string name;
    int rarity;
};

using ItemNode = std::list<Item>::iterator;

class OrionsBag
{
    public:
        ItemNode Get(std::string name);
        ItemNode Get(int rarity);
        ItemNode GetRarest();
        std::list<ItemNode> GetRarestN(int count);
        ItemNode Add(Item item);
        bool Remove(ItemNode it);
        std::list<Item> GetBag();
    private:
        std::list<Item> bag;
        std::map<int, ItemNode> bagItemsByRarity;
        std::unordered_map<std::string, ItemNode> bagItemsByName;
};

#endif // ORIONS_BAG_OF_HOLDING_H

