#include <iostream>
#include <string>

// Перечисление различных типов существ
enum class CreatureType
{
	troll,
	wyrm,
	goblin,
	arachnid,
	goo
};

// Структура для представления существа
struct Creature
{
	CreatureType species {};
	std::string label {};
	int vitality {};
};

// Функция для получения строки с названием типа существа
std::string describeCreatureType(CreatureType species)
{
	switch (species)
	{
	case CreatureType::troll:
		return "Troll";
	case CreatureType::wyrm:
		return "Wyrm";
	case CreatureType::goblin:
		return "Goblin";
	case CreatureType::arachnid:
		return "Arachnid";
	case CreatureType::goo:
		return "Goo";
	}
	return "Unknown";
}

// Функция для вывода информации о существе
void displayCreature(Creature creature)
{
	std::cout << "This " << describeCreatureType(creature.species) <<
		" is named " << creature.label <<
		" and has " << creature.vitality << " health points.\n";
}

int main()
{
	Creature troll{ CreatureType::troll, "Grim", 160 };
	Creature goo{ CreatureType::goo, "Glim", 30 };

	displayCreature(troll);
	displayCreature(goo);

	return 0;
}
