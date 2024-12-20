//
// Created by nbollom on 9/10/18.
//

#include "view.h"

View::View(const std::shared_ptr<Game> &game, const MessageHandler &message_handler) {
    this->game = game;
    this->message_handler = message_handler;
}
