#include <iostream>
#include <string>
#include <cctype>
#include <list>
#include <map>
#include <unordered_map>

// hpp files
struct Item{
    std::string description;
    std::string Incantation;
    std::string name;
    int rarity;
};

using ItemNode = std::list<Item>::iterator;

class OrionsBag{
    public:
        ItemNode Get(std::string name);
        ItemNode Get(int rarity);
        ItemNode GetRarest();
        std::list<ItemNode> GetRarestN(int count);
        ItemNode Add(Item item);
        bool Remove(ItemNode it);
    private:
        std::list<Item> bag;
        std::map<int, ItemNode> bagItemsByRarity;
        std::unordered_map<std::string, ItemNode> bagItemsByName;
};

// cpp file
ItemNode OrionsBag::Add(Item item)
{
    bag.push_front(item);
    ItemNode it = bag.begin();
    bagItemsByRarity.insert(std::make_pair(item.rarity, it));
    bagItemsByName.insert(std::make_pair(item.name, it));
    return it;
}

ItemNode OrionsBag::Get(std::string name)
{
    return bagItemsByName.at(name);
}

ItemNode OrionsBag::Get(int rarity)
{
    return bagItemsByRarity.at(rarity);
}

ItemNode OrionsBag::GetRarest()
{
    return bagItemsByRarity.rbegin()->second;
}

std::list<ItemNode> OrionsBag::GetRarestN(int count)
{
   std::list<ItemNode> topNKeys;
   auto it = bagItemsByRarity.begin();
   for (int i = 0; i < count && it != bagItemsByRarity.end(); ++i, ++it)
   {
       topNKeys.push_back(it->second);
   }
   return topNKeys;
}

bool OrionsBag::Remove(ItemNode it)
{
    bagItemsByRarity.erase(it->rarity);
    bagItemsByName.erase(it->name);
    bag.erase(it);
    return true;
}

int main()
{
    return 0;
}

