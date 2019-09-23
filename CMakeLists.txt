cmake_minimum_required(VERSION 3.14)
project(Chess)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

include_directories(Controller)
include_directories(Controller/Server)

include_directories(Model)
include_directories(Model/Game)
include_directories(Model/Game/Field)
include_directories(Model/Game/Piece)
include_directories(Model/Game/Piece/Bishop)
include_directories(Model/Game/Piece/King)
include_directories(Model/Game/Piece/Knight)
include_directories(Model/Game/Piece/Peasant)
include_directories(Model/Game/Piece/Queen)
include_directories(Model/Game/Piece/Rook)
include_directories(Model/Player)
include_directories(Model/Player/Human)
include_directories(Mode l/Player/Machine)

include_directories(View)

add_executable(
        Chess
        chess.cpp
        chess.h
            Controller/controller.cpp
            Controller/controller.h
                Controller/Server/server.cpp
                Controller/Server/server.h

            Model/model.cpp
            Model/model.h
                Model/Game/game.cpp
                Model/Game/game.h
                    Model/Game/Field/field.cpp
                    Model/Game/Field/field.h

                    Model/Game/Piece/piece.cpp
                    Model/Game/Piece/piece.h
                        Model/Game/Piece/Bishop/bishop.cpp
                        Model/Game/Piece/Bishop/bishop.h

                        Model/Game/Piece/King/king.cpp
                        Model/Game/Piece/King/king.h

                        Model/Game/Piece/Knight/knight.cpp
                        Model/Game/Piece/Knight/knight.h

                        Model/Game/Piece/Peasant/peasant.cpp
                        Model/Game/Piece/Peasant/peasant.h

                        Model/Game/Piece/Queen/queen.cpp
                        Model/Game/Piece/Queen/queen.h

                        Model/Game/Piece/Rook/rook.cpp
                        Model/Game/Piece/Rook/rook.h

                Model/Player/player.cpp
                Model/Player/player.h
                    Model/Player/Human/human.cpp
                    Model/Player/Human/human.h

                    Model/Player/Machine/machine.cpp
                    Model/Player/Machine/machine.h

            View/view.cpp
            View/view.h
)
