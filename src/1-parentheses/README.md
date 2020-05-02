# Parentheses

## Objective

Write a program to determine if the parentheses `( )`, square brackets `[ ]`, and curly braces `{ }` in a string **are balanced**. Balanced means each opening symbol has a corresponding closing symbol and the pairs of brackets are properly nested. For example:

* `{{)(}}` is **not** balanced because `)` comes before `(`
* `({)}` is **not** balanced because `{`  precedes `)`
* `[({})]` is balanced
* `{}([])` is balanced
* `{()}[[{}]]` is balanced
* `{(([]))]((` is **not** balanced as the last two parentheses are not closed

## Guidelines

* Use Standard Template Library
* Use TDD methodolody - Catch2 and/or GTest

Project structure:

```
Parentheses
  |- src (cpp files)
  |- inc (hpp files)
  |- test_catch (cpp files with tests (Catch))
  |- test_gtest (cpp files with tests (GTest))
  |- CMakeLists.txt
```