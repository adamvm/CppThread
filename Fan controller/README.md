# Good programming practices

- Clean code
- Naming conventions
- Code formatting
- KISS
- DRY
- YAGNI
- SOLID
- GRASP
- Testable code
- Dependency injection
- Dummy, stub, mock
- TDD

## Description

Your company needs a controller that can properly cool down some other devices. It will use 2 devices: a thermometer to read the temperature and a fan to control.

Your architect has already proposed interfaces.

The SlowThermometer will be used as a thermometer in your product. It provides with a current temperature. It is a vendor implementation and you cannot change it.

Fan must be controlled appropriately and must speed up when the temperature is too high or should be disabled when it is too low. Fan speed (in rpm - rotations per minute) can be set from 1000 to 3000. It can also be equal to 0, what means that the fan is disabled.

The Controller require a termomether and a fan to work. Without them it does not work. It also needs a target temperature and a tolerance. When the temperature is in a range <targetTemperature - tolerance, targetTemperature + tolerance>, controller should keep the fan speed at 1000 rpm. When it is below targetTemperature - tolerance, the fan should be disabled. When it is above, the fan speed must must be adjusted by 1 rpm per each 0.001 degree. Max speed is 3000 rpm.

Controller can have an LCD display, which displays current temperature, target temperature and a fan speed. Controller, however, can work without a display.

## Assignment

### Propose improvements for the existing code

Write them on a flipchart

### Refactor the existing, tested code

1. Never change both implementation and tests, because if tests fails you don't know if tests or implementation are broken
2. Apply your improvements

    <details><summary>Spoiler</summary>
    <p><ul>
        <li>missing virtual destructors</li>
        <li>const correctness (const functions, const params, const variables)</li>
        <li>redundant constructors</li>
        <li>broken Rule of 3, 5, 0</li>
        <li>overcomplicated implementation</li>
        <li>dead code</li>
        <li>use default, delete, override</li>
        <li>pass shared_ptrs via const &</li>
        <li>shared_ptr constructor -> make_shared</li>
    </ul></p>
    </details>

### Write a missing part in TDD mode

Write an implementation of a Controller module using TDD in Catch2 framework in BDD style with Hippomocks as a mocking framework. Use good programming practices.

#### Tips

- extract magic values to consts (constexpr)
- use dependency injection to inject artificial thermometer for testing
- use exception to simplify the error handling
- use STL algorithms
- use references instead of raw pointers
- avoid code duplication
