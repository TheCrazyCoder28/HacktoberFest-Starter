# Write a python program to make a game called Tic Tac Toe.

import random
import time

name = input("\nWhat is your name? : ")
name = name.lower()

board_positions = [' ' for position in range(10)]


def InsertLetter(letter, position):
    board_positions[position] = letter


def IsSpaceFree(position):
    return board_positions[position] == ' '


def PrintBoard(board_positions):
    print('\n   |   |   ')
    print(' ' + board_positions[1] + ' | ' + board_positions[2] + ' | ' + board_positions[3])
    print('   |   |   ')
    print('===========')
    print('   |   |   ')
    print(' ' + board_positions[4] + ' | ' + board_positions[5] + ' | ' + board_positions[6])
    print('   |   |   ')
    print('===========')
    print('   |   |   ')
    print(' ' + board_positions[7] + ' | ' + board_positions[8] + ' | ' + board_positions[9])
    print('   |   |   ')


def IsBoardFull(board_positions):
    if board_positions.count(' ') > 1:
        return False
    else:
        return True


def IsWinner(board_positions, letter):
    return ((board_positions[1] == letter and board_positions[2] == letter and board_positions[3] == letter) or
            (board_positions[4] == letter and board_positions[5] == letter and board_positions[6] == letter) or
            (board_positions[7] == letter and board_positions[8] == letter and board_positions[9] == letter) or
            (board_positions[1] == letter and board_positions[4] == letter and board_positions[7] == letter) or
            (board_positions[2] == letter and board_positions[5] == letter and board_positions[8] == letter) or
            (board_positions[3] == letter and board_positions[6] == letter and board_positions[9] == letter) or
            (board_positions[1] == letter and board_positions[5] == letter and board_positions[9] == letter) or
            (board_positions[3] == letter and board_positions[5] == letter and board_positions[7] == letter))


def PlayerMove():
    run = True
    while run:
        move = input("\nPlease select a position to enter the 'X' between 1 to 9 : ")
        try:
            move = int(move)
            if 0 < move < 10:
                if IsSpaceFree(move):
                    run = False
                    InsertLetter('X', move)
                else:
                    print("\nWarning : Sorry, this space is occupied!")
            else:
                print("\nWarning : Please type a number between 1 and 9")
        except:
            print("\nNote : Please type a number!")


def ComputerMove():
    possible_moves = [position for position, letter in enumerate(board_positions) if letter == ' ' and position != 0 ]
    move = 0

    for move_letter in ['O', 'X']:
        for move_position in possible_moves:
            positions_copy = board_positions[:]
            positions_copy[move_position] = move_letter
            if IsWinner(positions_copy, move_letter):
                move = move_position
                return move

    open_corners = []
    for possible_move in possible_moves:
        if possible_move in [1, 3, 7, 9]:
            open_corners.append(possible_move)

    if len(open_corners) > 0:
        move = SelectRandom(open_corners)
        return move

    if 5 in possible_moves:
        move = 5
        return move

    open_edges = []
    for possible_move in possible_moves:
        if possible_move in [2, 4, 6, 8]:
            open_edges.append(possible_move)

    if len(open_edges) > 0:
        move = SelectRandom(open_edges)
        return move


def SelectRandom(letter):
    letters_length = len(letter)
    random_position = random.randrange(0, letters_length)
    return letter[random_position]


def main():
    time.sleep(2)
    print("\n------------------------------")
    print("\tWelcome to Tic Tac Toe")
    print("------------------------------")
    time.sleep(2)
    PrintBoard(board_positions)

    while not(IsBoardFull(board_positions)):
        if not(IsWinner(board_positions, 'O')):
            PlayerMove()
            PrintBoard(board_positions)
        else:
            time.sleep(2)
            print("\n-------------------------")
            print("\tSorry, You loose!")
            print("-------------------------")
            break

        if not(IsWinner(board_positions, 'X')) or IsBoardFull(board_positions):
            move = ComputerMove()
            if move == None:
                print(" ")
            else:
                InsertLetter('O', move)
                print("\nComputer placed an 'O' on position", move)
                PrintBoard(board_positions)
        else:
            time.sleep(2)
            print("\n----------------")
            print("\tYou won!")
            print("----------------")
            break

    if IsBoardFull(board_positions):
        time.sleep(2)
        print("\n------------------")
        print("\tGame Tied!")
        print("------------------")


def Starter():
    time.sleep(1)
    permission = input(f"\nHello {name}, Do you want to play Tic Tac Toe? ( Yes/No ) : ")
    permission = permission.capitalize()

    if permission == "Yes":
        main()
    elif permission == "No":
        time.sleep(2)
        print("\n----------------------")
        print("\tOk, Good Luck!")
        print("----------------------")
    else:
        time.sleep(2)
        print("\n\"I think, you can't write the words correctly.\"")
        Starter()


if __name__ == '__main__':
    Starter()


while True:
    time.sleep(4)
    answer = input("\nIf you want to play again then press 'Y' or press any key to Quit : ")
    answer = answer.capitalize()
    if answer == "Y":
        board_positions = [' ' for position in range(10)]
        main()
    else:
        quit()
