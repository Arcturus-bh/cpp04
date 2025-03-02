#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[4];

	public:
		Character(void);
		Character(const std::string name);
		Character(const Character& other);
		~Character(void);

		// surcharge
		Character& operator=(const Character& other);

		// setters & getters
		std::string const& getName(void) const;
		
		// methods
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
		void delete_inventory(void);
		bool check_idx(int idx);
};