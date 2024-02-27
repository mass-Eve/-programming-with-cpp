# Cheat Sheet For Derivation Of Members

| Type Of Member | Visibility In private Inheritance | Visibility In public Inheritance | Visibility In protected Inheritance |
| :------------: | :-------------------------------: |:-------------------------------: | :-------------------------------: |
| public         | inherited as a private member of the derived class. | inherited as a public member of the derived class. |  inherited as a protected member of the derived class. |
| private        | not inherited at all. | not inherited at all. | not inherited at all. |
| protected      | inherited as a private member of the derived class. | inherited as a protected member of the derived class. |  inherited as a protected member of the derived class. |