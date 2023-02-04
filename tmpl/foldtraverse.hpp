//
// Created by martin on 04/02/2023.
//

#pragma once

struct Node
{
    int value;
    Node *sub_left { nullptr };
    Node *sub_right { nullptr };

    explicit Node (int i = 0) :
        value { i }
    {

    }

    [[nodiscard]] int get_value() const
    {
      return value;
    }

    static constexpr auto left = &Node::sub_left;
    static constexpr auto right = &Node::sub_right;

    template < typename T, typename ... TP>
    static Node* traverse (T node_pointer, TP... paths)
    {
      return (node_pointer ->* ... ->* paths);
    }
};