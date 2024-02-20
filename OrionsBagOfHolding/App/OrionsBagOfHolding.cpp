#include "OrionsBagOfHolding.h"

ItemNode OrionsBag::Add(Item item)
{
    // TODO: Need to enforce some kind of uniqueness
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

std::list<Item> OrionsBag::GetBag()
{
    return bag;
}