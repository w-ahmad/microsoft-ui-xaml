//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     ANTLR Version: 4.5.3
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from ConditionalNamespace.g4 by ANTLR 4.5.3

// Unreachable code detected
#pragma warning disable 0162
// The variable '...' is assigned but its value is never used
#pragma warning disable 0219
// Missing XML comment for publicly visible type or member '...'
#pragma warning disable 1591
// Ambiguous reference in cref attribute
#pragma warning disable 419


using Antlr4.Runtime.Misc;
using IErrorNode = Antlr4.Runtime.Tree.IErrorNode;
using ITerminalNode = Antlr4.Runtime.Tree.ITerminalNode;
using IToken = Antlr4.Runtime.IToken;
using ParserRuleContext = Antlr4.Runtime.ParserRuleContext;

/// <summary>
/// This class provides an empty implementation of <see cref="IConditionalNamespaceListener"/>,
/// which can be extended to create a listener which only needs to handle a subset
/// of the available methods.
/// </summary>
[System.CodeDom.Compiler.GeneratedCode("ANTLR", "4.5.3")]
[System.CLSCompliant(false)]
public partial class ConditionalNamespaceBaseListener : IConditionalNamespaceListener {
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.program"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterProgram([NotNull] ConditionalNamespaceParser.ProgramContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.program"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitProgram([NotNull] ConditionalNamespaceParser.ProgramContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.expression"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterExpression([NotNull] ConditionalNamespaceParser.ExpressionContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.expression"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitExpression([NotNull] ConditionalNamespaceParser.ExpressionContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.uri"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterUri([NotNull] ConditionalNamespaceParser.UriContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.uri"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitUri([NotNull] ConditionalNamespaceParser.UriContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.unquoted_namespace"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterUnquoted_namespace([NotNull] ConditionalNamespaceParser.Unquoted_namespaceContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.unquoted_namespace"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitUnquoted_namespace([NotNull] ConditionalNamespaceParser.Unquoted_namespaceContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.api_information"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterApi_information([NotNull] ConditionalNamespaceParser.Api_informationContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.api_information"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitApi_information([NotNull] ConditionalNamespaceParser.Api_informationContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.function_param"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterFunction_param([NotNull] ConditionalNamespaceParser.Function_paramContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.function_param"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitFunction_param([NotNull] ConditionalNamespaceParser.Function_paramContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.target_platform_value"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterTarget_platform_value([NotNull] ConditionalNamespaceParser.Target_platform_valueContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.target_platform_value"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitTarget_platform_value([NotNull] ConditionalNamespaceParser.Target_platform_valueContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.query_string"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterQuery_string([NotNull] ConditionalNamespaceParser.Query_stringContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.query_string"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitQuery_string([NotNull] ConditionalNamespaceParser.Query_stringContext context) { }
	/// <summary>
	/// Enter a parse tree produced by the <c>QueryStringTargetPlatform</c>
	/// labeled alternative in <see cref="ConditionalNamespaceParser.query_string_component"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterQueryStringTargetPlatform([NotNull] ConditionalNamespaceParser.QueryStringTargetPlatformContext context) { }
	/// <summary>
	/// Exit a parse tree produced by the <c>QueryStringTargetPlatform</c>
	/// labeled alternative in <see cref="ConditionalNamespaceParser.query_string_component"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitQueryStringTargetPlatform([NotNull] ConditionalNamespaceParser.QueryStringTargetPlatformContext context) { }
	/// <summary>
	/// Enter a parse tree produced by the <c>QueryStringApiInformation</c>
	/// labeled alternative in <see cref="ConditionalNamespaceParser.query_string_component"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterQueryStringApiInformation([NotNull] ConditionalNamespaceParser.QueryStringApiInformationContext context) { }
	/// <summary>
	/// Exit a parse tree produced by the <c>QueryStringApiInformation</c>
	/// labeled alternative in <see cref="ConditionalNamespaceParser.query_string_component"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitQueryStringApiInformation([NotNull] ConditionalNamespaceParser.QueryStringApiInformationContext context) { }
	/// <summary>
	/// Enter a parse tree produced by <see cref="ConditionalNamespaceParser.target_platform_func"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void EnterTarget_platform_func([NotNull] ConditionalNamespaceParser.Target_platform_funcContext context) { }
	/// <summary>
	/// Exit a parse tree produced by <see cref="ConditionalNamespaceParser.target_platform_func"/>.
	/// <para>The default implementation does nothing.</para>
	/// </summary>
	/// <param name="context">The parse tree.</param>
	public virtual void ExitTarget_platform_func([NotNull] ConditionalNamespaceParser.Target_platform_funcContext context) { }

	/// <inheritdoc/>
	/// <remarks>The default implementation does nothing.</remarks>
	public virtual void EnterEveryRule([NotNull] ParserRuleContext context) { }
	/// <inheritdoc/>
	/// <remarks>The default implementation does nothing.</remarks>
	public virtual void ExitEveryRule([NotNull] ParserRuleContext context) { }
	/// <inheritdoc/>
	/// <remarks>The default implementation does nothing.</remarks>
	public virtual void VisitTerminal([NotNull] ITerminalNode node) { }
	/// <inheritdoc/>
	/// <remarks>The default implementation does nothing.</remarks>
	public virtual void VisitErrorNode([NotNull] IErrorNode node) { }
}
