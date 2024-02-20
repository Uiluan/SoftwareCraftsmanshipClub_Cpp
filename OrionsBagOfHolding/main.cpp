#include "App/OrionsBagOfHolding.h"

int main()
{
    OrionsBag bag;

    Item item1 = {"A sword", "Excalibur", "Sword of Kings", 100};
    Item item2 = {"A shield", "Aegis", "Shield of Kings", 85};
    Item item3 = {"A ring", "One Ring", "Ring of Kings", 101};
    Item item4 = {"A sword", "Sting", "Sword of Hobbits", 54};

    bag.Add(item1);
    bag.Add(item2);
    bag.Add(item3);
    bag.Add(item4);

    ItemNode it = bag.Get("Sword of Kings");
    std::cout << "Item: " << it->name << " Rarity: " << it->rarity <<
        " Description: " << it->description << " Incantation: " << it->Incantation << std::endl;

    it = bag.Get(85);
    std::cout << "Item: " << it->name << " Rarity: " << it->rarity <<
        " Description: " << it->description << " Incantation: " << it->Incantation << std::endl;

    it = bag.GetRarest();
    std::cout << "Item: " << it->name << " Rarity: " << it->rarity <<
        " Description: " << it->description << " Incantation: " << it->Incantation << std::endl;

    std::list<ItemNode> topNKeys = bag.GetRarestN(2);
    for (auto it = topNKeys.begin(); it != topNKeys.end(); ++it)
    {
        std::cout << "Item: " << (*it)->name << " Rarity: " << (*it)->rarity <<
            " Description: " << (*it)->description << " Incantation: " << (*it)->Incantation << std::endl;
    }

    std::cout << "Removing Sword of Kings" << std::endl;
    std::cout << "Starting list size: " << bag.GetBag().size() << std::endl;
    bag.Remove(bag.Get("Sword of Kings"));
    std::cout << "Ending list size: " << bag.GetBag().size() << std::endl;

    return 0;
}

