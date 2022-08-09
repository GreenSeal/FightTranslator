//
// Created by denist on 8/9/22.
//

int main() {
    SymbolTable varTable{};
    SymbolTable typeTable{};
    SymbolTable funcTable{};
    // Lexem types: var, type, constant, keyword, arythm_op, func
    FightLexer lexer{};
    lexer.DoLexing();
    std::vector<lexem_t> lexems = lexer.GetLexems(); // std::move?

    FightParser parser{lexems};
    parser.DoParsing();
    BaseTreeNode* syntaxTree = parser.GetSyntaxTree();

    FightLLVMCodeGen cg{syntaxTree};
    cg.DoCodeGen();
    LLVMBaseNode *baseNode = cg.GetLLVMList();
}
